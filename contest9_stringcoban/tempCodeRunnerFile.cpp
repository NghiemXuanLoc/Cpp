if (s.size() > 3)
    {
        for (int i = 3; i < s.size(); i += 4)
        {
            if (i <= s.size() - (s.size() % 3))
            {
                s.insert(i, ",");
            }
        }
        cout << s << endl;
    }
    else
        cout << s << endl;