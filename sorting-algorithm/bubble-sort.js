const printArray = arr => {
  let result = [...arr];
  for (let i = 0; i < result.length - 1; i++) {
    for (let j = 0; j < result.length - 1 - i; j++) {
      if (result[j] > result[j + 1]) {
        let temp = result[j];

        result[j] = result[j + 1];
        result[j + 1] = temp;
      }
    }
  }

  return result;
};

const result = printArray([22, 3, 5, 13, 2, 18, 7, 9]);
console.log(result);
