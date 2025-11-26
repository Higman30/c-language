# K&R C → C17 リファクタリング集（c-language/K&R）

このディレクトリは、  
**K&R『The C Programming Language, 2nd Edition』のコードを写経しつつ、  
C17 準拠の書き方にリファクタリングした before/after 集** です。

## 対象

- 書籍: *The C Programming Language, 2nd Edition* (Brian W. Kernighan, Dennis M. Ritchie)
- 対応章:
  - chapter1〜chapter6
- 開発環境:
  - macOS / VSCode
  - コンパイラ: clang
  - 基本オプション: `-std=c17 -Wall -Wextra -pedantic -Werror`

## ディレクトリ構成

```text
c-language/
  └─ K&R/
     ├─ chapter1/
     ├─ chapter2/
     ├─ chapter3/
     ├─ chapter4/
     ├─ chapter5/
     └─ chapter6/

•	before版
	•	K&R第2版のソースをベースにしている
	•	変更は基本的に
	•	ファイル名に kr_ prefix
	•	_before suffix を付ける程度
	•	仕様・挙動はオリジナルと同じ
	•	古いスタイル（main() など）もあえて残している
•	after版 (C17)
	•	目的：
	•	-std=c17 -Wall -Wextra -pedantic -Werror で警告・エラーが出ないこと
    •	int main(void)への変更など
	•	未定義動作の削減（例：INT_MIN の -n 問題など）
	•	isspace / isalpha などに unsigned char キャストを付ける
    •   EOFの扱いなど
	•	ヘッダ分割・extern宣言の整理