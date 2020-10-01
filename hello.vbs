set x = wscript.createobject("sapi.spvoice")
dim str
if hour(time)<12 then
x.speak "Good marning Taijuhsvee"
else
if hour(time)>12 then
if hour(time)>16 then
x.speak "Good eevning Taijuhsvee"
else
x.speak "Good  aafturnoon Taijuhsvee"
end if
end if
end if