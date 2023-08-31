// write a function that takes in an array and a number
// return the max subarray sum

// ex : [1, 5, 9, 2, 6, 9, 3], 3 = 18

// NAIVE SOLUTION
const maxSubarraySum = (array, num) => {
  let result = -Infinity;

  for (let i = 0; i < array.length - num + 1; i++) {
    let temp = 0;
    for (let j = 0; j < num; j++) {
      temp += array[i + j];
    }
    if (temp > result) {
      result = temp;
    }
  }

  return result;
};

const result = maxSubarraySum([1, 5, 9, 2, 6, 9, 3], 3);
console.log(result);
