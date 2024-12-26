import java.util.LinkedList;
import java.util.Queue;

class MyStack {
    Queue<Integer> q1 = new LinkedList<>();

    public MyStack() {
        
    }
    
    public void push(int x) {
        q1.offer(x);
        // Rotate the queue to make the last added element the front
        int size = q1.size();
        for (int i = 1; i < size; i++) {
            q1.offer(q1.poll());
        }
    }
    
    public int pop() {
        return q1.poll(); // Remove and return the front element
    }
    
    public int top() {
        return q1.peek(); // Return the front element without removing it
    }
    
    public boolean empty() {
        return q1.isEmpty(); // Check if the queue is empty
    }
}

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * boolean param_4 = obj.empty();
 */
