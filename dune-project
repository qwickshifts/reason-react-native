(lang dune 3.12)

(using melange 0.1)

(source
 (github qwickshifts/reason-react-native))

(license MIT)

(maintainers "Kian Masri")

(authors "idk")

(homepage https://github.com/qwickshifts/reason-react-native)

(bug_reports https://github.com/qwickshifts/reason-react-native/issues)

(name reason-react-native)

(package
 (name reason-react-native)
 (synopsis "ReasonML Bindings for React Native")
 (description "ReasonML Bindings for React Native")
 (depends
  dot-merlin-reader
  (melange
   (and
    (>= 3.0.0)
    (< 5.0.0)))
  (ocaml
   (>= 5.1.0))
  (reason
   (>= 3.10.0))
  (ocaml-lsp-server :with-dev-setup)
  (ocamlformat :with-dev-setup)
  reason-react
  (opam-check-npm-deps :with-dev-setup)))

(generate_opam_files)
