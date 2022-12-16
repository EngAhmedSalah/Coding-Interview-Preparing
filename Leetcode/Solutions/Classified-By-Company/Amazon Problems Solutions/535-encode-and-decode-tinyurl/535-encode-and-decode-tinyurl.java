public class Codec 
{
    String output = "http://tinyurl.com/";
    int[] count;
    int[] table;
    int hashcode = 0;
    // Encodes a URL to a shortened URL.
    public String encode(String longUrl)
    {
        int len = longUrl.length();
        count = new int[26];
        table = new int[len];
        for(int i = 0 ; i < len ; ++i)
        {
            table[i] = longUrl.charAt(i);
            hashcode += (i * (int)(longUrl.charAt(i)));
                if(Character.isLetter(longUrl.charAt(i)))
                    count[Character.toLowerCase(longUrl.charAt(i)) - 'a'] += 1;
        }
        for (int i = 0 ; i < 26 ; ++i)
            if(count[i] != 0)
            {
                output += (String.valueOf((char) (i + 'a') + "" + count[i]));
            }
        return output + " " + hashcode;
    }

    // Decodes a shortened URL to its original URL.
    public String decode(String shortUrl)
    {
        String encodedUrl = "";
        for(int i = 0 ; i < table.length ; ++i)
            encodedUrl += (char)(table[i]);
        return encodedUrl;
    }
}

// Your Codec object will be instantiated and called as such:
// Codec codec = new Codec();
// codec.decode(codec.encode(url));