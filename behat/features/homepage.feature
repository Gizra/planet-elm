Feature: User login
  In order to be able to get updated on the new site content
  As an anonymous user
  I should be able to access the homepage

  @api
  Scenario: Access homepage as anonymous user
    Given I am an anonymous user
     When I visit "/"
     Then I should see "Home"
