PID=$(sudo lsof -t -i :8888)
 
if [ -z "$PID" ]; then
    echo ""
else
    sudo kill -9 $PID
fi