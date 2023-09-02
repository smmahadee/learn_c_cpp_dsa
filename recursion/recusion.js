// const countDown = num => {
//   if (num <= 0) return 0;

//   return num + countDown(num - 1);
// };

// console.log(countDown(5));

// FACTOR OF NUMBER

// const factorial = (num) => {
//     if(num === 1) return 1;

//     return num * factorial(num - 1);
// }

// console.log(factorial(4))

// STORE COUNT DOWN NUMBER IN ARRAY

// let numArr = [];

// const countDownArray = num => {
//   if (num <= 0) {
//     numArr.push(0);
//     return;
//   }

//   numArr.push(num);

//   countDownArray(num - 1);
// };

// countDownArray(10);
// console.log(numArr);

// COLLECT ODD VALUE

// const storeOddValues = mainArray => {
//   let result = [];

//   const findOddValue = partialArray => {
//     if (partialArray.length === 0) return;

//     if (partialArray[0] % 2 !== 0) result.push(partialArray[0]);

//     findOddValue(partialArray.slice(1));
//   };

//   findOddValue(mainArray);
//   return result;
// };

// console.log(storeOddValues([1, 3, 5, 4, 6, 9]))


// PURE RECURSION 

const storeOddValues = (arr) => {
    let result = [];
    
}