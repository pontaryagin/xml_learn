// Copyright (c) 2005-2023 Code Synthesis.
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis gives permission
// to link this program with the Xerces-C++ library (or with modified
// versions of Xerces-C++ that use the same license as Xerces-C++), and
// distribute linked combinations including the two. You must obey the GNU
// General Public License version 2 in all respects for all of the code
// used other than Xerces-C++. If you modify this copy of the program, you
// may extend this exception to your version of the program, but you are
// not obligated to do so. If you do not wish to do so, delete this
// exception statement from your version.
//
// Furthermore, Code Synthesis makes a special exception for the Free/Libre
// and Open Source Software (FLOSS) which is described in the accompanying
// FLOSSE file.
//

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/pre.hxx>

#include "sample.h"

namespace sample_ns
{
}

#include <xsd/cxx/xml/dom/parsing-source.hxx>

namespace sample_ns
{
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace sample_ns
{
  ::std::unique_ptr< ::sample_ns::noteType >
  note (const ::std::string& u,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::tree::error_handler< char > h;

    ::xml_schema::dom::unique_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        u, h, p, f));

    h.throw_if_failed< ::xsd::cxx::tree::parsing< char > > ();

    return ::std::unique_ptr< ::sample_ns::noteType > (
      ::sample_ns::note (
        std::move (d), f | ::xml_schema::flags::own_dom, p));
  }

  ::std::unique_ptr< ::sample_ns::noteType >
  note (const ::std::string& u,
        ::xml_schema::error_handler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xml_schema::dom::unique_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        u, h, p, f));

    if (!d.get ())
      throw ::xsd::cxx::tree::parsing< char > ();

    return ::std::unique_ptr< ::sample_ns::noteType > (
      ::sample_ns::note (
        std::move (d), f | ::xml_schema::flags::own_dom, p));
  }

  ::std::unique_ptr< ::sample_ns::noteType >
  note (const ::std::string& u,
        ::xercesc::DOMErrorHandler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xml_schema::dom::unique_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        u, h, p, f));

    if (!d.get ())
      throw ::xsd::cxx::tree::parsing< char > ();

    return ::std::unique_ptr< ::sample_ns::noteType > (
      ::sample_ns::note (
        std::move (d), f | ::xml_schema::flags::own_dom, p));
  }

  ::std::unique_ptr< ::sample_ns::noteType >
  note (::std::istream& is,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::xml::sax::std_input_source isrc (is);
    return ::sample_ns::note (isrc, f, p);
  }

  ::std::unique_ptr< ::sample_ns::noteType >
  note (::std::istream& is,
        ::xml_schema::error_handler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::xml::sax::std_input_source isrc (is);
    return ::sample_ns::note (isrc, h, f, p);
  }

  ::std::unique_ptr< ::sample_ns::noteType >
  note (::std::istream& is,
        ::xercesc::DOMErrorHandler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::sax::std_input_source isrc (is);
    return ::sample_ns::note (isrc, h, f, p);
  }

  ::std::unique_ptr< ::sample_ns::noteType >
  note (::std::istream& is,
        const ::std::string& sid,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
    return ::sample_ns::note (isrc, f, p);
  }

  ::std::unique_ptr< ::sample_ns::noteType >
  note (::std::istream& is,
        const ::std::string& sid,
        ::xml_schema::error_handler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
    return ::sample_ns::note (isrc, h, f, p);
  }

  ::std::unique_ptr< ::sample_ns::noteType >
  note (::std::istream& is,
        const ::std::string& sid,
        ::xercesc::DOMErrorHandler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
    return ::sample_ns::note (isrc, h, f, p);
  }

  ::std::unique_ptr< ::sample_ns::noteType >
  note (::xercesc::InputSource& i,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::tree::error_handler< char > h;

    ::xml_schema::dom::unique_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        i, h, p, f));

    h.throw_if_failed< ::xsd::cxx::tree::parsing< char > > ();

    return ::std::unique_ptr< ::sample_ns::noteType > (
      ::sample_ns::note (
        std::move (d), f | ::xml_schema::flags::own_dom, p));
  }

  ::std::unique_ptr< ::sample_ns::noteType >
  note (::xercesc::InputSource& i,
        ::xml_schema::error_handler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xml_schema::dom::unique_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        i, h, p, f));

    if (!d.get ())
      throw ::xsd::cxx::tree::parsing< char > ();

    return ::std::unique_ptr< ::sample_ns::noteType > (
      ::sample_ns::note (
        std::move (d), f | ::xml_schema::flags::own_dom, p));
  }

  ::std::unique_ptr< ::sample_ns::noteType >
  note (::xercesc::InputSource& i,
        ::xercesc::DOMErrorHandler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xml_schema::dom::unique_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        i, h, p, f));

    if (!d.get ())
      throw ::xsd::cxx::tree::parsing< char > ();

    return ::std::unique_ptr< ::sample_ns::noteType > (
      ::sample_ns::note (
        std::move (d), f | ::xml_schema::flags::own_dom, p));
  }

  ::std::unique_ptr< ::sample_ns::noteType >
  note (const ::xercesc::DOMDocument& doc,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    if (f & ::xml_schema::flags::keep_dom)
    {
      ::xml_schema::dom::unique_ptr< ::xercesc::DOMDocument > d (
        static_cast< ::xercesc::DOMDocument* > (doc.cloneNode (true)));

      return ::std::unique_ptr< ::sample_ns::noteType > (
        ::sample_ns::note (
          std::move (d), f | ::xml_schema::flags::own_dom, p));
    }

    const ::xercesc::DOMElement& e (*doc.getDocumentElement ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (e));

    if (n.name () == "note" &&
        n.namespace_ () == "sample_ns")
    {
      ::std::unique_ptr< ::sample_ns::noteType > r (
        ::xsd::cxx::tree::traits< ::sample_ns::noteType, char >::create (
          e, f, 0));
      return r;
    }

    throw ::xsd::cxx::tree::unexpected_element < char > (
      n.name (),
      n.namespace_ (),
      "note",
      "sample_ns");
  }

  ::std::unique_ptr< ::sample_ns::noteType >
  note (::xml_schema::dom::unique_ptr< ::xercesc::DOMDocument > d,
        ::xml_schema::flags f,
        const ::xml_schema::properties&)
  {
    ::xml_schema::dom::unique_ptr< ::xercesc::DOMDocument > c (
      ((f & ::xml_schema::flags::keep_dom) &&
       !(f & ::xml_schema::flags::own_dom))
      ? static_cast< ::xercesc::DOMDocument* > (d->cloneNode (true))
      : 0);

    ::xercesc::DOMDocument& doc (c.get () ? *c : *d);
    const ::xercesc::DOMElement& e (*doc.getDocumentElement ());

    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (e));

    if (f & ::xml_schema::flags::keep_dom)
      doc.setUserData (::xml_schema::dom::tree_node_key,
                       (c.get () ? &c : &d),
                       0);

    if (n.name () == "note" &&
        n.namespace_ () == "sample_ns")
    {
      ::std::unique_ptr< ::sample_ns::noteType > r (
        ::xsd::cxx::tree::traits< ::sample_ns::noteType, char >::create (
          e, f, 0));
      return r;
    }

    throw ::xsd::cxx::tree::unexpected_element < char > (
      n.name (),
      n.namespace_ (),
      "note",
      "sample_ns");
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

