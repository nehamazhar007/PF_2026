class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.empty()) return true;
        if (t.empty()) return false;

        const char* target_ptr = s.c_str();
        const char* const termination_char = target_ptr + s.length();

        for (const char current_char : t) {
            if (current_char == *target_ptr) {
                target_ptr++;
                
                if (target_ptr == termination_char) {
                    return true;
                }
            }
        }

        return false;
    }
};
  