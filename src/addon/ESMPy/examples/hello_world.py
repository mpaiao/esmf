import ESMF

# Start up ESMF, this call is only necessary to enable debug logging
# esmpy = ESMF.Manager(debug=True)

print "Hello ESMPy World from PET (processor) {0}!".format(ESMF.local_pet())