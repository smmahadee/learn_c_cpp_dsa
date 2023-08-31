// You will get a sorted array, you have to check and return the first pair that the sum of that pair is 0

// examples [-3, -2, -1, 0, 1, 2, 4] = [-3, 3];

// NAIVE SOLUTION
// const sumZero = arr => {
//   if (arr.length === 0) return [];

//   for (let i = 0; i < arr.length; i++) {
//     for (let j = i + 1; j < arr.length; j++) {
//       if (arr[i] + arr[j] === 0) return [arr[i], arr[j]];
//     }
//   }
// };

// OPTIMIZE SOLUTION
const sumZero = arr => {
  // write pointer 1
  let left = 0;
  // write pointer 2
  let right = arr.length - 1;

  // while loop untill left is smaller than right
  while (left < right) {
    //if left + right is equal to 0 , return that pair
    const sum = arr[left] + arr[right];
    if (sum === 0) {
      return [arr[left], arr[right]];
    }
    // else if left + right is greater than 1 then decrease the right
    else if (sum > 1) {
      right--;
    }
    // else increase the left
    else {
      left++;
    }
  }
};

const result = sumZero([-3, -2, -1, 0, 1, 2, 4]);
console.log(result);
