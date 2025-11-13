# C Language Portfolio – 藤基滋夫

## 概要
本リポジトリは、古典的Cコード（K&Rなど）をC17準拠へ移植・再構成した学習と実践の記録です。  
可読性・移植性・テスト容易性を重視し、モダンなビルド環境（clang, VS Code, GitHub Actions）を整備しています。

## 技術スタック
- **Compiler:** clang (Apple Silicon) / -std=c17 -Wall -Wextra
- **Editor:** Visual Studio Code
- **GitHub:** [Higman30/c-language](https://github.com/Higman30/c-language)
- **OS:** macOS “Tahoe” (15.x)

## 構成
| フォルダ | 内容 |
|-----------|------|
| K_R/ | 『The C Programming Language（K&R）』準拠の章別コード（C17対応） |
| Practical_C/ | 実用Cプログラミング練習問題 |
| utils/ | 共通ライブラリ群（文字列処理・I/O・計算など） |
| test/ | 単体テスト・境界値テスト |
| docs/ | ドキュメント類・PDFまとめ |

## 特徴
- 関数名・変数名を明確化（K&R由来コードも現代仕様に）
- clang -Weverything 準拠で警告0
- テストコードで境界条件 (-2147483648 など) を網羅
- Markdown＋PDF形式でC17準拠ドキュメント整備

## 今後の展開
- 小規模Cプログラム案件（既存コード移植・リファクタリング等）を対象に業務化
- ポートフォリオPDFの更新・公開予定

---

### 📄 PDFドキュメント
- [悟りの記_生と死と理.pdf](./docs/悟りの記_生と死と理.pdf)
- [C17_guideline.pdf](./docs/C17_guideline.pdf)
- [portfolio_summary.pdf](./docs/portfolio_summary.pdf)