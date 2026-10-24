class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {
        vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        string sma = "";
        sma = sma + arriveAlice[0];
        sma = sma + arriveAlice[1];
        int x1 = stoi(sma);

        string ema = "";
        ema = ema + leaveAlice[0];
        ema = ema + leaveAlice[1];
        int x2 = stoi(ema);

        string sda = "";
        sda = sda + arriveAlice[3];
        sda = sda + arriveAlice[4];
        int y1 = stoi(sda);

        string eda = "";
        eda = eda + leaveAlice[3];
        eda = eda + leaveAlice[4];
        int y2 = stoi(eda);

        string smb = "";
        smb = smb + arriveBob[0];
        smb = smb + arriveBob[1];
        int z1 = stoi(smb);

        string emb = "";
        emb = emb + leaveBob[0];
        emb = emb + leaveBob[1];
        int z2 = stoi(emb);

        string sdb = "";
        sdb = sdb + arriveBob[3];
        sdb = sdb + arriveBob[4];
        int w1 = stoi(sdb);

        string edb = "";
        edb = edb + leaveBob[3];
        edb = edb + leaveBob[4];
        int w2 = stoi(edb);

        int sm = max(x1, z1);
        int em = min(x2, z2);

        int sd = max(y1, w1);
        int ed = min(y2, w2);

        if (sm > em) {
            return 0;
        }

        int st, end;

        if (x1 == sm && z1 == sm) {
            st = max(y1, w1);
        } else if (x1 == sm) {
            st = y1 ; 
        } else {
            st = w1;
        }
        if (x2 == em && z2 == em) {
            end = min(y2, w2);
        } else if (x2 == em) {
            end = y2;
        } else {
            end = w2;
        }

        if (sm == em) {
            return  max(0 , end -st  + 1);
        }
           int ans = days[sm-1] - st +1;
        
        for (int i = sm + 1; i < em; i++) {
            ans = ans + days[i - 1];
        }
        ans += end;
        return ans;
    }
};