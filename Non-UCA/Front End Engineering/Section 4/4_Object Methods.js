
ladder.setSteps = function(steps) {
    this.steps = steps;
    return this.steps;
  };
  ladder.getSteps = function() {
    return this.steps;
  };
  ladder.stepUp = function() {
    this.steps++;
    return this.steps;
  };
  ladder.stepDown = function() {
    this.steps--;
    return this.steps;
  };
