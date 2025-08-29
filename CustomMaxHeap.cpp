#include <bits/stdc++.h>
using namespace std;

class MaxHeap {
private:
    vector<int> heap;

    // Helper functions
    void heapifyUp(int index) {
        int parent = (index - 1) / 2;
        while (index > 0 && heap[parent] < heap[index]) {
            swap(heap[parent], heap[index]);
            index = parent;
            parent = (index - 1) / 2;
        }
    }

    void heapifyDown(int index) {
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        int largest = index;

        if (left < heap.size() && heap[left] > heap[largest])
            largest = left;
        if (right < heap.size() && heap[right] > heap[largest])
            largest = right;

        if (largest != index) {
            swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }

public:
    // Insert a value into the heap
    void push(int val) {
        heap.push_back(val);
        heapifyUp(heap.size() - 1);
    }

    // Remove and return the maximum value (root)
    int pop() {
        if (heap.empty())
            throw out_of_range("Heap is empty");

        int maxVal = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        if (!heap.empty())
            heapifyDown(0);
        return maxVal;
    }

    // Get the maximum value without removal
    int peek() const {
        if (heap.empty())
            throw out_of_range("Heap is empty");
        return heap[0];
    }

    // Check if the heap is empty
    bool isEmpty() const {
        return heap.empty();
    }

    // Print the heap (for debugging)
    void print() const {
        for (int num : heap)
            cout << num << " ";
        cout << endl;
    }
};

int main() {
    MaxHeap maxHeap;

    // Insert elements
    maxHeap.push(30);
    maxHeap.push(20);
    maxHeap.push(15);
    maxHeap.push(50);
    maxHeap.push(10);
    maxHeap.push(5);

    cout << "Max-Heap: ";
    maxHeap.print();
    cout << "Max element: " << maxHeap.peek() << endl; // 50

    // Extract max
    cout << "Extracted max: " << maxHeap.pop() << endl; // 50
    cout << "Heap after extraction: ";
    maxHeap.print();

    return 0;
}