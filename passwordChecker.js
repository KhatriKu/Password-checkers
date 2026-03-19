function checkPasswordStrength(a) {
    var points = 0;
    if(a.length >= 8){points += 10;}
    if(a.match(/[a-z]/)){points += 2;}
    if(a.match(/[A-Z]/)){points += 2;}
    if(a.match(/[0-9]/)){points += 2;}
    if(a.match(/[^a-zA-Z0-9]/)){points += 2;}

    if(points < 10){
        return "Weak";
    }
    else if(points < 14){
        return "Medium";
    }
    else{
        return "Strong";
    }

}