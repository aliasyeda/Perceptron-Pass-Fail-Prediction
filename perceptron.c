#include <stdio.h>

int activation(double x) {
    return (x >= 0) ? 1 : 0;
}

int main() {
    double hours[] = {2, 5, 8, 6, 1, 9};
    double attendance[] = {50, 60, 85, 80, 30, 90};
    int labels[] = {0, 0, 1, 1, 0, 1};
    int n = 6;

    // Normalize data (helps convergence)
    double x1[6], x2[6];
    for (int i = 0; i < n; i++) {
        x1[i] = hours[i] / 10.0;
        x2[i] = attendance[i] / 100.0;
    }

    double w1 = 0.0, w2 = 0.0, bias = 0.0;
    double lr = 0.1;
    int epochs = 20;

    printf("Training Perceptron...\n\n");

    for (int e = 1; e <= epochs; e++) {
        int errors = 0;

        for (int i = 0; i < n; i++) {
            double net = w1 * x1[i] + w2 * x2[i] + bias;
            int pred = activation(net);
            int err = labels[i] - pred;

            if (err != 0) {
                w1 += lr * err * x1[i];
                w2 += lr * err * x2[i];
                bias += lr * err;
                errors++;
            }
        }

        printf("Epoch %2d: w1=%.4f, w2=%.4f, bias=%.4f, errors=%d\n", e, w1, w2, bias, errors);
        if (errors == 0) {
            printf("Training converged at epoch %d\n", e);
            break;
        }
    }

    // Show predictions
    printf("\nFinal predictions on training data:\n");
    printf("Hours  Attend  Actual  Predicted\n");
    for (int i = 0; i < n; i++) {
        double net = w1 * x1[i] + w2 * x2[i] + bias;
        int pred = activation(net);
        printf("%5.1f   %6.0f     %d        %d\n", hours[i], attendance[i], labels[i], pred);
    }

    // User input
    double h, a;
    printf("\nEnter study hours: ");
    scanf("%lf", &h);
    printf("Enter attendance: ");
    scanf("%lf", &a);

    double net = w1 * (h / 10.0) + w2 * (a / 100.0) + bias;
    int prediction = activation(net);
    printf("\nPrediction: %s\n", prediction ? "PASS (1)" : "FAIL (0)");

    return 0;
}
