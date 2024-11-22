const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let n, count = 0;

rl.on('line', (line) => {
  if (!n) {
    n = parseInt(line);
  } else {
    const [petya, vasya, tonya] = line.split(' ').map(Number);
    if (petya + vasya + tonya >= 2) {
      count++;
    }
    n--;
    if (n === 0) {
      console.log(count);
      rl.close();
    }
  }
});
