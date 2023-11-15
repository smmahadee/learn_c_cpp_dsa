const findFactorNumNaive = num => {
  if (num <= 1) return false;
  let factorNum = [];

  for (let i = 1; i <= num; i++) {
    if (num % i === 0) {
      factorNum.push(i);
    }
  }

  return factorNum;
};

const findFactorNumBetter = num => {
  if (num <= 1) return false;
  let factorNum = [1];
  const loopLength = Math.floor(Math.sqrt(num));
  for (let i = 2; i <= loopLength; i++) {
    if (num % i === 0) {
      factorNum.push(i);
      factorNum.push(num / i);
    }
  }

  factorNum.push(num);

  return factorNum;
};

// console.log(findFactorNumBetter(1000000000));

const isPrimeNumber = num => {
  if (num <= 1) return false;

  const loopLength = Math.floor(Math.sqrt(num));
  for (let i = 2; i <= loopLength; i++) {
    if (num % i === 0) return false;
  }

  return true;
};

// const result = isPrimeNumber(10);

const findPrimeNumber = num => {
  if (num <= 1) return false;

  const arr = Array.from({ length: num }).map((_, i) => i + 1);

  for (let i = 1; i < arr.length; i++) {
    
  }

  return arr;
};

console.log(findPrimeNumber(10000));

// console.log(result);
