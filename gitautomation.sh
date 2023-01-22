#!/bin/bash

# Set the directory to watch for changes
watch_dir="/mnt/nfs/homes/jperrama/Github/LeetCode"

# Set the commit message
commit_message="new commit"

# Start the infinite loop to watch for changes
while true; do
    # Get the current state of the directory
    current_state=$(find $watch_dir -type f -exec md5sum {} \;)

    # Sleep for a second before checking again
    sleep 1

    # Get the new state of the directory
    new_state=$(find $watch_dir -type f -exec md5sum {} \;)

    # Compare the current state to the new state
    if [ "$current_state" != "$new_state" ]; then
        # If the states are different, add, commit, and push the changes
        git add .
        git commit -m "$commit_message"
        git push
    fi
done