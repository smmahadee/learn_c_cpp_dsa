const findIndex = (arr, value) => {
    for(let i = 0; i < arr.length; i++) {
        if(arr[i] === value) {
            return i;
        } 
    }

    return -1;
}

console.log(findIndex([0,12], 13))