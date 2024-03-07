function Queue() {
  var collection = [];
  this.print = function() {
    console.log(collection);
  };
  // Only change code below this line
	this.enqueue = function(x){
		collection.push(x);
	};

	this.dequeue =function(){
		let  x=collection[0];
		collection.shift();
		return x;
	};

	this.front = function(){
		return collection[0];
	};

	this.size =function(){
		return collection.length;
	};

	this.isEmpty = function () {
		if(this.size()){
			return false;
		}
		return true;
	}

  // Only change code above this line
}

