class CircularQueue {
  constructor(size) {
    this.queue = new Array(size).fill(null);
    this.read = 0;
    this.write = 0;
    this.capacity = size;
  }

  print() {
    return this.queue;
  }

  enqueue(item) {
    if (this.queue[this.write] === null) {
      this.queue[this.write] = item;
      this.write = (this.write + 1) % this.capacity;
      return item;
    }

    return null; // Queue is full
  }

  dequeue() {
    if (this.queue[this.read] !== null) {
      const result = this.queue[this.read];
      this.queue[this.read] = null;
      this.read = (this.read + 1) % this.capacity;
      return result;
    }

    return null; // Queue is empty
  }
}


let x=new CircularQueue(5)
x.enqueue(4)
x.enqueue(5)
x.enqueue(6)
x.enqueue(7)
x.enqueue(8)
x.dequeue()
x.enqueue(10)
x.dequeue()
console.log(x.print())
