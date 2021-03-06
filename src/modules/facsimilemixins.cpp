#include "facsimilemixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::FacsimileMixIn::FacsimileMixIn(MeiElement *b) {
    this->b = b;
};

mei::FacsimileMixIn::~FacsimileMixIn() {}
MeiAttribute* mei::FacsimileMixIn::getFacs() {
    if (!b->hasAttribute("facs")) {
        return NULL;
    }
    return b->getAttribute("facs");
};

void mei::FacsimileMixIn::setFacs(std::string _facs) {
    MeiAttribute *a = new MeiAttribute("facs", _facs);
    b->addAttribute(a);
};

bool mei::FacsimileMixIn::hasFacs() {
    return b->hasAttribute("facs");
};

void mei::FacsimileMixIn::removeFacs() {
    b->removeAttribute("facs");
};

/* include <facsmixin> */


