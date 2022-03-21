def double(x):
    return 2*x

def test_double():
    x= 4
    expected= 8.2
    computed= double(x)
    success= computed == expected
    msg="computed %s , expected %s" %(computed,expected)
    assert success,msg

test_double()