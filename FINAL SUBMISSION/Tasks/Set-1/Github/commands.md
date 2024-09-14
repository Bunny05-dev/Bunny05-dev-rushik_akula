1)git clone
-To clone the repo

2)cd <directory>
-to move to the given directory

3)Get-Date > <>.txt
-to create a .txt file

4)git add <>.txt
-to add the text file to the repo

5)git commit -m ""
-to lock the changes made

6)git checkout -b <>
-To create and switch to a new branch

7)echo "# <> description" > <>.md
-To create a markdown file and put some description to it

8)$LAST_COMMIT_HASH = git log -1 --format=%H
-to get the last commit hash

9)Add-Content -Path <>.md -Value "`n`nLast commit hash: $LAST_COMMIT_HASH"
-To add/append the commit hash to the markdown file

10)git checkout main
-To switch to a main branch

11)git merge <>
-To merge the branches

12)git reset --soft HEAD~1
-Used to undo the last commit but keep the changes

