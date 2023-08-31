// Write a function called countUniqueValues,
// which accepts a sorted array, and counts the unique vlaues in the array
// There can be negetive number, but it will be sorted

// solution using SET
// const countUniqueValues = (arr) => {
//     return new Set(arr).size;
// }

// solution using frequency pattern
// const countUniqueValues = (arr) => {
//     const resultObject = {};

//     for(let el of arr) {
//         resultObject[el] = ++resultObject[el] || 1;
//     }

//     return Object.keys(resultObject).length;
// }

// SOLUTION WITH TWO POINTER
const countUniqueValues = arr => {
  if (arr.length < 0) return [];

  let left = 0;
  let right = 1;

  for (let i = 0; i < arr.length; i++) {
    if (arr[left] === arr[right]) {
      right++;
    }
    if (arr[left] !== arr[right]) {
      left++;
      arr[left] = arr[right];
    }
  }

  return left;
};

const result = countUniqueValues([1, 1, 2, 3, 5, 5, 6, 8, 12, 12]);
console.log(result);
