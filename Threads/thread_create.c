#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

// Function to be executed by each thread
void *thread_function(void *arg) {
    int *thread_id = (int *)arg;
    printf("Thread %d: Hello, I am a new thread!\n", *thread_id);
    return NULL;
}

int main() {
    pthread_t threads[5];  // Array to hold thread identifiers
    int thread_ids[5];     // Array to pass unique IDs to threads

    // Create 5 threads
    for (int i = 0; i < 5; i++) {
        thread_ids[i] = i + 1;
        if (pthread_create(&threads[i], NULL, thread_function, &thread_ids[i]) != 0) {
            perror("Failed to create thread");
            return 1;
        }
    }

    // Wait for all threads to complete
    for (int i = 0; i < 5; i++) {
        if (pthread_join(threads[i], NULL) != 0) {
            perror("Failed to join thread");
            return 1;
        }
    }

    printf("All threads have completed execution.\n");
    return 0;
}

