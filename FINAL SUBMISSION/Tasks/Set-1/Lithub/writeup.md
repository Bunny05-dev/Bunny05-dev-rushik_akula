COMMAND NO.1: git stash
-The changes now are saved in the current branch.

COMMAND NO.2: git checkout main
-Now we moved from the previous branch to the main branch.

COMMAND NO.3: git pull
-To update the local repo to get the latest changes in the remote repo.

COMMAND NO.4: git log
-Used to inspect the repo history.

COMMAND NO.5: git show --name-only <hash>
- Gives file(branchname.txt)

COMMAND NO.6: git show <hash>: branchname.txt
-To view the contents in the given file

COMMAND NO.7: git checkout <branch>
-To switch to the given branch.

COMMAND NO.8: unzip protected.zip
-To unzip the file named protected.zip, I found that there exists 7z file

COMMAND NO.9: 7za x protected.7z
-OUTPUT: I got a .gz file from this.

COMMAND NO.10: gzip -d misc.zip.xz.zst.bz2.gz
-To decompress the file.
-OUTPUT: I got a “.bz2” file

COMMAND NO.11: bzip2 -d misc.zip.xz.zst.bz2
-Here I got  .zst compressed file

COMMAND NO.12: zstd --decompress misc.zip.xz.zst
-OUTPUT we get another .xz compressed file.

COMMAND NO.13: xz --decompress.misc.zip.xz
-OUTPUT: we get another zip file.

COMMAND NO.14: unzip misc.zip
-OUTPUT: Now we got the archive file which is decompressed.

COMMAND NO.15: tar -xf misc.tar

COMMAND NO.16 cd misc
-To move to a directory named misc

COMMAND NO.17: cat * > files.txt
-To put the content of all files into files.txt

COMMAND NO.18: sort files.txt > sort.txt
-sorts the combined data.

COMMAND NO.19: uniq -d sort.txt > doops.txt
-Only keeps and moves the doop content

COMMAND NO.20: sed ‘s/8/B/g’ doops.txt > changed_doops.txt
-Replaces all the ‘B’ with ‘8’.

COMMAND NO.21: echo”I am learning Git” <filename>
-Insert the message into the file.

COMMAND NO.22: git revert
-Remove the previous commit and go to the previous commit.

COMMAND NO.23: git commit -m “Created a new file”
-Committed the file.

COMMAND NO.24: git commit -m “Updated file”
-Committed the file again and kept the message as updated file
