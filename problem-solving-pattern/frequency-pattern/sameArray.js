// write a function that takes two array, and compare
// if the square of every array el is available in second array then return true otherwise false
// array element position doesn't matter

// result : ([1, 3, 5, 6], [9, 25, 36, 1]) return true

//NAIVE SOLUTION - TIME COMPLEXITY - O(n^2)
// const sameArray = (arr1, arr2) => {
//   if (arr1.length !== arr2.length) return false;

//   for (let el of arr1) {
//     if (!arr2.includes(el ** 2)) return false;
//   }

//   return true;
// };

// FREQUENCY PATTARN SOLUTION - TIME COMPLEXITY O(n);
const same = (arr1, arr2) => {
  // if their length doesn't equal then return
  if (arr1.length !== arr2.length) {
    return false;
  }

  // initialize two array that will be compare each other later
  const frequencyArr1 = {};
  const frequencyArr2 = {};

  // make two object from that array
  for (let el of arr1) {
    frequencyArr1[el] = ++frequencyArr1[el] || 1;
  }
  for (let el of arr2) {
    frequencyArr2[el] = ++frequencyArr2[el] || 1;
  }

  // compare two array by looping first one
  for (let el of arr1) {
    let square = frequencyArr1[el] ** 2;

    // check if the square of that element exist in the second object
    if (!(square in frequencyArr2)) {
      return false;
    }
    // if exist then check the quantity of that element is equal to first object element
    if (frequencyArr1[el] !== frequencyArr2[square]) {
      return false;
    }

    return true;
  }
};

const result = same([1, 2, 3, 4, 2], [4, 9, 16, 1, 4]);
console.log(result);
