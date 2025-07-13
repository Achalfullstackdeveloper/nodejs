const http = require("http");
const url = require("url");

const server = http.createServer((req, res) => {
  const studentData = [
    {
      messange: "Hello World",
      name: "Achal Patil",
    },
    {
      messange: "Hello Node.js",
      name: "Atharv Dixit",
    },
  ];

  res.writeHead(200, { "Content-Type": "application/json" });
  let result = JSON.stringify(studentData);
  res.write(result);
  res.end();
});

server.listen(4000, () => {
  console.log("Server is running at http://localhost:4000/");
});
