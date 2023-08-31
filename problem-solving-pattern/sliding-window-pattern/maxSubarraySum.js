// write a function that takes in an array and a number
// return the max subarray sum

// ex : [1, 5, 9, 2, 6, 9, 3], 3 = 18

// NAIVE SOLUTION
// const maxSubarraySum = (array, num) => {
//   let result = -Infinity;

//   for (let i = 0; i < array.length - num + 1; i++) {
//     let temp = 0;
//     for (let j = 0; j < num; j++) {
//       temp += array[i + j];
//     }
//     if (temp > result) {
//       result = temp;
//     }
//   }

//   return result;
// };

// SLIDING WINDOW SOLUTION
const maxSubarraySum = (arr, num) => {
  if (num > arr.length) return;

  let max = 0;
  let temp = 0;

  for (let i = 0; i < num; i++) {
    max += arr[i];
  }
  temp = max;

  for (let i = num; i < arr.length; i++) {
   temp  = temp - arr[i - num] + arr[i]
   max = Math.max(max , temp);
  }

  return max;
};

const result = maxSubarraySum([3, 5, 2, 8], 2);
console.log(result);
