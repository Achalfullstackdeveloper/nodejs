const http = require("http");
const url = require("url");
 
const server = http.createServer((req, res) => {
    console.log(req);
    let userMachine = req.headers["user-agent"];
    // handling the query paraneters
    const x = url.parse(req.url, true);
    const y = x?.query;
   
    if (y?.name){
        res.writeHead(200, { "content-type": "text/plain" });
        res.end(`Hello ${query.name}`);
        return;
    } else if (req.url === "/yash"){
        res.writeHead(200, { "content-type": "text/planin" });
        res.end("Hello Yash");
        return;
    }
    res.end(`Hello world form ${userMachine}`);
});
 
server.listen(3000, () => {
    console.log("Server is running at http://localhost:3000/");
});
  
  