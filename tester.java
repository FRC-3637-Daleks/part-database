/**
 * Created by Zethra on 12/15/2014.
 */
import static java.lang.System.out;

public class tester {
    public static void main(String args[]) {
        Bridge bridge = new Bridge();
        bridge.connect("localhost", 8080);
        bridge.send("hello");
        out.printf("%s", bridge.recv());
        bridge.disconnect();
    }
}
