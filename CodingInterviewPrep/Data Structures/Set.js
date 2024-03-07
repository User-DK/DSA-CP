class Set {
  constructor() {
    // Dictionary will hold the items of our set
    this.dictionary = {};
    this.length = 0;
  }

  // This method will check for the presence of an element and return true or false
  has(element) {
    return this.dictionary[element] !== undefined;
  }

  // This method will return all the values in the set
  values() {
    return Object.values(this.dictionary);
  }

  // Only change code below this line
  add(value){
    if(this.has(value)){
      return false;
    }
    this.dictionary[value]=value
    this.length++
    return true
  }

  remove(value){
    if(!this.has(value)){
      return;
    }
    delete this.dictionary[value]
    this.length--
    return true
  }

  size(){
    return this.length
  }

  display(){
    return this.dictionary
  }
  // Only change code above this line
}

let set=new Set()
set.add(4)
set.add(5)
set.remove(5)
set.add(5)
// console.log()
// console.log()
console.log(set.display())
console.log(set.size())

