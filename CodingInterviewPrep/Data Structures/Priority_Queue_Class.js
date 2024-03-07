function PriorityQueue() {
  this.collection = [];

  this.printCollection = function () {
    console.log(this.collection);
  };
  // Only change code below this line


  this.enqueue = function (element) {
    if (this.collection.length==0) {
      this.collection.push(element);
    } else {
      let added = false;
      for (let i = 0; i < this.collection.length; i++) {
        if (element[1] < this.collection[i][1]) {
          this.collection.splice(i, 0, element);
          added = true;
          break;
        }
      }
      if (!added) {
        this.collection.push(element);
      }
    }
  };

  this.dequeue = function () {
    let element = this.collection.shift()[0];
    return element;
  };

  this.front = function () {
    return this.collection[0][0];
  };

  this.size = function () {
    return this.collection.length;
  };

  this.isEmpty = function () {
    return this.size() === 0;
  };
  // Only change code above this line
}



