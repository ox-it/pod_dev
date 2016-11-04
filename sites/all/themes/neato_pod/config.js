module.exports = {
  browserSync: {
    hostname: "pod-dev.dev",
    port: 8080,
    openAutomatically: true,
    reloadDelay: 50,
    injectChanges: true,
  }

  // drush: {
  //   enabled: false,
  //   alias: {
  //     css_js: 'drush @SITE-ALIAS cc css-js',
  //     cr: 'drush @SITE-ALIAS cc all'
  //   }
  // },

  // tpl: {
  //   rebuildOnChange: true
  // }
};
