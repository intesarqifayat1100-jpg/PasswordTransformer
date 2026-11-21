# Password Transformer

A C++ console program that reads a user-entered password, reverses its character order, applies character substitutions using a `switch` statement, and prints the transformed password.

## How It Works
1. Prompts the user to enter a `password` string (`cin >> password`).
2. Reverses the characters from back to front into `newPassword` using a `for` loop with safe signed indexing (`static_cast<int>(password.size()) - 1`).
3. Iterates through `newPassword` and replaces matching characters via a `switch` statement:
   - `'m'` → `'Q'`
   - `'s'` → `'7'`
   - `'a'` → `'@'`
   - `'o'` → `'+'`
   - `'r'` → `'z'`
   - `'4'` → `'!'`
   - All other characters remain unchanged.
4. Prints the final result to the console (`New password: <newPassword>`).

## Example Run
```text
Enter password: mars40
New password: 0!7z@Q
