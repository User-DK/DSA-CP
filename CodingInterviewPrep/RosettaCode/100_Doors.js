// here i got a intuition that the number of 
// visits to a particular door is constrained by the 
// factors of that number means 1 st door has one factor
// so it would be opened and similarly second door would be closed as 
// it has even number of factors :) 
//after some optimization i found that only perfect squares have odd number of factors!!

function getFinalOpenedDoors(numDoors) {
  let doors = Array.apply(null, { length: 100 })
    .map((x, i) => i + 1)
    .filter(i => Math.sqrt(i) === Math.floor(Math.sqrt(i)));
  return doors;
}

getFinalOpenedDoors(100)


//Un-optimised

// function factors(n) {
//   let factor = 0;
//   for (let i = 1; i <= n; i++) {
//     if (n % i == 0) {
//       factor++;
//     }
//   }
//   return factor;
// }

// function getFinalOpenedDoors(numDoors) {
//   let doors = [];
//   for (let i = 1; i <= numDoors; i++) {
//     let factor = factors(i)
//     console.log(factor)
//     if (factor % 2 != 0) {
//       doors.push(i)
//     }
//   }
//   return doors;
// }

// getFinalOpenedDoors(100)
