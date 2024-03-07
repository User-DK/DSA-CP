function Stack() {
  var collection = [];
  this.print = function() {
    console.log(collection);
  };

  // Only change code below this line
  this.push = function(x) {
    collection.push(x);
  };

  this.peek = function() {
    return collection[collection.length - 1];
  };

  this.pop = function() {
    let x = this.peek(); // Fix: use this.peek() instead of collection.peek()
    collection.pop();
    return x;
  };

  this.isEmpty = function() {
    return collection.length === 0; // Simplified the return statement
  };

  this.clear = function() {
    while (!this.isEmpty()) {
      collection.pop();
    }
  };
  // Only change code above this line
}

// Example of initializing a new stack object
var myStack = new Stack();
myStack.push(1);
myStack.push(2);
myStack.push(3);

console.log("Original Stack:");
myStack.print(); // Output: [1, 2, 3]

console.log("Peek:", myStack.peek()); // Output: 3

console.log("Pop:", myStack.pop()); // Output: 3
console.log("Updated Stack:");
myStack.print(); // Output: [1, 2]

console.log("Is Empty:", myStack.isEmpty()); // Output: false

myStack.clear();
console.log("Cleared Stack:");
myStack.print(); // Output: []
