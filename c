
git config --global user.name "Your Name"
git config --global user.email "youremail@example.com"

git clone https://github.com/Hritika12-34/ml-ops.git

cd ml-ops

echo "My first Git file" > test.txt

git add test.txt
git commit -m "Added test.txt"

git push origin main
