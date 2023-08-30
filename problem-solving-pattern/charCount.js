// Write a function that takes in a string and return the count of each character from that string

const charCount = str => {
  const result = {};

  for (let char of str) {
    char = char.toLowerCase();
    if (/[a-z0-9]/.test(char)) {
      result[char] = ++result[char] || 1;
    }
  }

  return result;
};

const result = charCount('Hello how are YOU !! ');
console.log(result);
