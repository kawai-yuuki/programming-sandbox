#!/bin/bash

BACKUP_DIR="backup_files"

# バックアップ先ディレクトリが存在しない場合（!は否定）作成する
if [ ! -d "$BACKUP_DIR" ]; then
	mkdir "$BACKUP_DIR"
	echo "&BACKUP_DIRを作成しました．"
fi


