/**
 * Created by Ben Goldberg on 12/15/2014.
 */
import java.net.*;
import java.io.*;
public class Bridge {
    private Socket cs;
    private OutputStream outToServer;
    private InputStream inFromServer;
    private DataOutputStream out;
    private DataInputStream in;

    public void connect(String host, int port) {
        host = "localhost";
        port = 8080;
        try {
            cs = new Socket(host, port);

            outToServer = cs.getOutputStream();
            out = new DataOutputStream(outToServer);

            inFromServer = cs.getInputStream();
            in = new DataInputStream(inFromServer);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public void disconnect() {
        try {
            cs.close();
        } catch (IOException e) {
            e.printStackTrace();
        }

    }

    public void send(String msg) {
        try {
            out.writeUTF(msg);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public String recv() {
        try {
            return in.readUTF();
        } catch (IOException e) {
            e.printStackTrace();
            return "";
        }
    }
}
