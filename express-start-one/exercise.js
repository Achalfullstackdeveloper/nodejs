const http = require("http");

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

  const teacherData = [
    { subject: "Node Js", 
        name: "Yogesh Lolusare" 
    },
    { 
        messange: "communication",
        name: "Ruchi Mam" 
    },
  ];
 
  if (req.url === "/student") {
    res.writeHead(200, { "Content-Type": "application/json" });
    res.end(JSON.stringify(studentData));
  } else if (req.url === "/teacher") {
    res.writeHead(200, { "Content-Type": "application/json" });
    res.end(JSON.stringify(teacherData));
  } else {
    res.writeHead(404, { "Content-Type": "text/html" });
    res.end("<h1>Invalid Route!</h1>");
  }
});

server.listen(4000, () => {
  console.log("Server is running at http://localhost:4000/");
});
