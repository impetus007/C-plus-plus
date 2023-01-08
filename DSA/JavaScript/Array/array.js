//const arr = [1, 2, 3];
//console.log(arr);

//console.log(arr.indexOf(1)); // find the index of array

//console.log(arr.length); // give the length if array.

// conacat() :- used to merge two arrays
// const arr = [1, 2, 3];
// const arr2 = [4, 5, 6];
// console.log(arr.concat(arr2));
// concat reuturn shallow copy{ a shallow copy of an object is a copy whose properties share the same references as those of the source from which the copy was made. as a result when you change either the source or the copy , you may also cause the other object to change too- and so you may end up unitenyionallu causing changes to tjhe source or copy that you dont except. }
// link :- https://developer.mozilla.org/en-US/docs/Glossary/Shallow_copy

//const arr = ["name", { list: ["eggs", "flour", "water"] }, "hi"];
//const copy = Array.from(arr); // Array.from() it is inbuilt js function which make shallow copy there are more like :- Array.prototype.concat(),Array.prototype.slice(),Array.from(),Object.assign() and Object.create();

// copy[2] = "hello";
// copy[1].list = ["rice"];
// console.log(copy);
// console.log(arr);

// Deep Copy :- deep copy of an object is a copy whose properties do not share the same references as those of the source object from which the copy was made . As a result when you chnage either the source or the copy , you can be assures you are not causing the other object to change too :- that is you wont unintentionally be causing change to the source ot copy that you dont except . that behaviour contrats with the behaviour of a shallow copy , in which changes to either the source ot the cipy may also cause the other object to chnage too (because the two objects share the same references);
// How to make deep copy in Js ?
// ans:- onw way to make a deep copy of a javascript object , if it can be serialized( the process whereby an object or data structue is translated into a format suitable for transfer over a network , or storage (e.g in an array buffer or file format));
// let arr = ["name", { list: ["eggs", "flour", "water"] }, "hi"];
// let deep = JSON.parse(JSON.stringify(arr));
// deep[1].list = ["hi"];
// console.log(arr);
// console.log(deep);

// copyWithin() :- method shallow copies part of an array to another location in the same array and returns it witout modifying its length;
// const arr = [1, 2, 3, 10, 15, 16];
// console.log(arr.copyWithin(0, 1, 2));
// copyWithin(target);
// copyWithin(target, start);
// copyWithin(target, start, end);

// every() :- method to tests wheather all ements in the array pass the test implementes by the provided function. it return a boolean value;
// const isBelowThreshold = (currentValue) => currentValue < 40;
// const array1 = [1, 30, 39, 29, 10, 13];
// console.log(array1.every(isBelowThreshold));

// Filter() :- method creates a shallow copy of a portion of a given array, filterd down to just the elemt form the givrn array that pass the test implementes by the provided function.
// const arr=[1,2,3,4,5,6];
// console.log(arr.filter(item  => item!==4));

// Objects ;- object is a collection of key-value pairs this data structure is alos called map, dictionary or hash-table in other programming language.

// Stack in Linked List
// class Node {
//   constructor(value) {
//     this.value = value;
//     this.next = null;
//   }
// }

// class stack {
//   constructor() {
//     this.first = null;
//     this.last = null;
//     this.size = 0;
//   }
//   push(val) {
//     var newNode = new Node(val);
//     if (!this.first) {
//       this.first = newNode;
//       this.last = newNode;
//     } else {
//     //   console.log(this.first);
//       var temp = this.first;
//     //   clg(this.first);
//       this.first = newNode;
//       this.first.next = temp;
//     }
//     return ++this.size;
//   }

//   pop() {
//     if (!this.first) return null;
//     var temp = this.first;
//     if (this.first === this.last) {
//       this.last = null;
//     }
//     this.first = this.first.next;
//     this.size--;
//     return temp.value;
//   }
// }

// const s = new stack();
//  s.push(1);
// s.push(2);
// s.push(3);
// s.push(4);
// s.push(5);
// s.pop()
// s.pop();
// s.pop();
// s.pop();
// s.pop();
// console.log(s.last);
// console.log(s.size)
// Insertion :- o(1);
// Removal :-o(1);
// Searching :- o(n);
// Access :-o(n);

// Impelemtation of Queues
class Node {
  constructor(val) {
    this.value = val;
    this.next = null;
  }
}

class Queue {
  constructor() {
    this.first = null;
    this.last = null;
    this.size = 0;
  }
  push(val) {
    var NewNode = new Node(val);

    if (!this.first) {
      this.first = NewNode;
      this.last = NewNode;
    } else {
      var temp = this.last;
      this.last = NewNode;
      temp.next = this.last;
    }
  }
  pop() {
    if (!this.first) return null;
    // if(!this.last) return null;
    var temp = this.first;
    if (this.first === this.last) {
      this.last = null;
    }
    this.first = this.first.next;
    this.size--;
    return temp.value;
  }
}

const q = new Queue();
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);
console.log(q.first);
console.log(q.last);
q.pop();
console.log(q.first);
console.log(q.last);
q.pop();
console.log(q.first);
console.log(q.last);
q.pop();
console.log(q.first);
console.log(q.last);
q.pop();
console.log(q.first);
console.log(q.last);
q.pop();
console.log(q.last);
// console.log(q.last);
