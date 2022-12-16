class Solution {
public:
    unordered_map<string , string> urlDB , codeDB;
    // Encodes a URL to a shortened URL.
    
    string getCode()
    {
        string code = "http://tinyurl.com/";
        string chars = "1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        for(int i = 0 ; i < 6 ; ++i)
            code += (chars[rand() % 62]);
        return code;
    }
    string encode(string longUrl) {
        if(urlDB.find(longUrl) != urlDB.end())
           return urlDB[longUrl];
        string code = getCode();
        while(codeDB.find(code) != codeDB.end())
            code = getCode();
        urlDB[longUrl] = code;
        codeDB[code] = longUrl;
        return code;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return codeDB[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));