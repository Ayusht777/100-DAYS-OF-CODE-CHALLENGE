from doctest import OutputChecker
import unittest
import uppercase
class Runtest(unittest.TestCase):
    def test1(self):
        text = "ayush"
        output = uppercase.Upper_case(text)
        self.assertEqual(output,'AYUSH')
    def test2(self):
        self.assertEqual(uppercase.Upper_case("HELLO"),'HELLO')    
#running test
       
if __name__ == '__main__':
    unittest.main()


"""
test-1 
Output : ----------------------------------------------------------------------
Ran 1 test in 0.000s

OK

test2:
AssertionError: 'Already Upper' != 'HELLO'
- Already Upper
+ HELLO


----------------------------------------------------------------------
Ran 2 tests in 0.004s

FAILED (failures=1)

"""