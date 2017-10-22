#include "proxy.h"

void Project::Operation() {}

Proxy::Proxy(Project *j) : m_j(j) {}
void Proxy::Operation() { m_j->Operation(); }